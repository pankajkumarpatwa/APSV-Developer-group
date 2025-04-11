// script.js

document.addEventListener('DOMContentLoaded', () => {
    // Canteen Menu (Simulated Data)
    const canteenMenu = [
        { name: 'Burger', price: '₹150.00', description: 'Classic beef burger' },
        { name: 'Pizza Slice', price: '₹200.00', description: 'Large slice of pepperoni pizza' },
        { name: 'Salad', price: '₹45.00', description: 'Fresh garden salad' },
        { name: 'Coffee', price: '₹55.00', description: 'Hot brewed coffee' }
    ];
    const canteenMenuDiv = document.getElementById('canteen-menu');
    if (canteenMenuDiv) {
        let menuHTML = '<ul>';
        canteenMenu.forEach(item => {
            menuHTML += `<li>
                            <h3>${item.name}</h3>
                            <p>${item.description}</p>
                            <p>Price: ${item.price}</p>
                            <button onclick="addToOrder('${item.name}')">Order</button>
                         </li>`;
        });
        menuHTML += '</ul>';
        canteenMenuDiv.innerHTML = menuHTML;
    }

    // Order Status (Simulated)
    const orderStatusDiv = document.getElementById('order-status');
    function updateOrderStatus(message) {
        if (orderStatusDiv) {
            orderStatusDiv.textContent = message;
        }
    }
    window.addToOrder = function(itemName) { // Made global for inline onclick in menu
        updateOrderStatus(`Order placed for ${itemName}. Status: Processing...`);
        setTimeout(() => {
            updateOrderStatus(`Order for ${itemName} is ready for pickup!`);
        }, 3000); // Simulate processing time
    };

    // Issue Reporting Form Handling (Simulated)
    const issueReportForm = document.getElementById('issue-report-form');
    const issueReportStatusDiv = document.getElementById('issue-report-status');
    if (issueReportForm) {
        issueReportForm.addEventListener('submit', function(event) {
            event.preventDefault(); // Prevent actual form submission
            const issueType = document.getElementById('issue-type').value;
            const issueDescription = document.getElementById('issue-description').value;
            const issueLocation = document.getElementById('issue-location').value;

            if (issueReportStatusDiv) {
                issueReportStatusDiv.textContent = `Issue reported: Type - ${issueType}, Description - ${issueDescription}, Location - ${issueLocation}. Status: Submitted.`;
                setTimeout(() => {
                    issueReportStatusDiv.textContent = `Issue report updated. Status: Under review.`;
                }, 2000); // Simulate status update
            }
            issueReportForm.reset(); // Clear form after submission
        });
    }

    // Lost & Found Actions
    const reportLostBtn = document.getElementById('report-lost-btn');
    const reportFoundBtn = document.getElementById('report-found-btn');
    const lostFoundFormsDiv = document.getElementById('lost-found-forms');
    const reportLostForm = document.getElementById('report-lost-form');
    const reportFoundForm = document.getElementById('report-found-form');

    if (reportLostBtn && reportFoundBtn && lostFoundFormsDiv && reportLostForm && reportFoundForm) {
        reportLostBtn.addEventListener('click', () => {
            lostFoundFormsDiv.classList.remove('hidden');
            reportLostForm.classList.remove('hidden');
            reportFoundForm.classList.add('hidden');
        });

        reportFoundBtn.addEventListener('click', () => {
            lostFoundFormsDiv.classList.remove('hidden');
            reportFoundForm.classList.remove('hidden');
            reportLostForm.classList.add('hidden');
        });

        // Lost Item Form Submission (Simulated)
        reportLostForm.addEventListener('submit', function(event) {
            event.preventDefault();
            const itemName = document.getElementById('lost-item-name').value;
            const itemDescription = document.getElementById('lost-item-description').value;
            const itemLocation = document.getElementById('lost-item-location').value;
            // In a real app, you'd send this data to a server
            alert(`Lost item reported: ${itemName}, Description: ${itemDescription}, Location: ${itemLocation}`);
            reportLostForm.reset();
            lostFoundFormsDiv.classList.add('hidden'); // Hide forms after submission
        });

        // Found Item Form Submission (Simulated)
        reportFoundForm.addEventListener('submit', function(event) {
            event.preventDefault();
            const itemName = document.getElementById('found-item-name').value;
            const itemDescription = document.getElementById('found-item-description').value;
            const itemLocation = document.getElementById('found-item-location').value;
            // In a real app, you'd send this data to a server
            alert(`Found item reported: ${itemName}, Description: ${itemDescription}, Location: ${itemLocation}`);
            reportFoundForm.reset();
            lostFoundFormsDiv.classList.add('hidden'); // Hide forms after submission
        });
    }


    // Bus Tracking (Simulated Data)
    const busRoutes = [
        { route: 'Route A', currentLocation: 'Campus Entrance', eta: '5 mins' },
        { route: 'Route B', currentLocation: 'Library', eta: '10 mins' },
        { route: 'Route C', currentLocation: 'Dorm Area', eta: '2 mins' }
    ];
    const busRoutesDiv = document.getElementById('bus-routes');
    if (busRoutesDiv) {
        let busHTML = '<ul>';
        busRoutes.forEach(bus => {
            busHTML += `<li>
                            <h3>${bus.route}</h3>
                            <p>Current Location: ${bus.currentLocation}</p>
                            <p>ETA: ${bus.eta}</p>
                         </li>`;
        });
        busHTML += '</ul>';
        busRoutesDiv.innerHTML = busHTML;
    }

    // Parking Availability (Simulated Data)
    const parkingInfoDiv = document.getElementById('parking-info');
    if (parkingInfoDiv) {
        const availableSpots = 50;
        parkingInfoDiv.textContent = `Available Parking Spots: ${availableSpots}`;
    }

    // Event List (Simulated Data)
    const events = [
        { name: 'Campus Fair', time: 'Tomorrow, 10 AM - 4 PM', location: 'Main Field' },
        { name: 'Workshop: Web Dev Basics', time: 'Next Monday, 2 PM - 5 PM', location: 'Tech Lab' }
    ];
    const eventListDiv = document.getElementById('event-list');
    if (eventListDiv) {
        let eventsHTML = '<ul>';
        events.forEach(event => {
            eventsHTML += `<li>
                            <h3>${event.name}</h3>
                            <p>Time: ${event.time}</p>
                            <p>Location: ${event.location}</p>
                         </li>`;
        });
        eventsHTML += '</ul>';
        eventListDiv.innerHTML = eventsHTML;
    }

    // Event Notifications (Simulated - could be more interactive in a real app)
    const eventNotificationsDiv = document.getElementById('event-notifications');
    if (eventNotificationsDiv) {
        eventNotificationsDiv.textContent = 'Upcoming events: Campus Fair, Web Dev Workshop';
    }

    // Simple Animation Example (Nav links on load - optional)
    const navLinks = document.querySelectorAll('nav a');
    navLinks.forEach((link, index) => {
        link.style.animationDelay = `${index * 0.1}s`; // Staggered animation
        link.classList.add('animate-fade-in'); // Add animation class
    });
});

/* --- Optional CSS for simple fade-in animation ---
Add this to your style.css if you want the nav link animation

@keyframes fadeIn {
    from { opacity: 0; transform: translateY(-10px); }
    to { opacity: 1; transform: translateY(0); }
}

.animate-fade-in {
    animation: fadeIn 0.5s ease-out forwards;
    opacity: 0; !* Initially hidden *!
}
*/