import org.springframework.web.bind.annotation.*; // Import Spring Boot REST annotations
import java.util.List;

@RestController // Marks this class as a REST Controller
@RequestMapping("/api/canteen") // Base path for canteen endpoints
public class CanteenController {

    private final CanteenService canteenService = new CanteenService(); // Instantiate the service

    @GetMapping("/menu") // Maps HTTP GET requests to /api/canteen/menu to this method
    public List<MenuItem> getMenuItems() {
        return canteenService.getAllMenuItems();
    }

    @GetMapping("/menu/{id}") // Maps GET requests to /api/canteen/menu/{id} (where {id} is a path variable)
    public MenuItem getMenuItemById(@PathVariable String id) {
        return canteenService.getMenuItemById(id);
    }

    @PostMapping("/order") // Maps HTTP POST requests to /api/canteen/order
    public OrderStatus placeOrder(@RequestBody OrderRequest orderRequest) { // Expect order details in request body
        // In a real app, you'd process the order, interact with database, etc.
        String menuItemId = orderRequest.getMenuItemId();
        MenuItem item = canteenService.getMenuItemById(menuItemId);
        if (item != null) {
            // Simulate order processing and return status
            return new OrderStatus(item.getName(), "Order Placed", "Processing");
        } else {
            return new OrderStatus("Unknown Item", "Order Failed", "Item not found");
        }
    }

    // Inner class to represent order request (for @RequestBody)
    static class OrderRequest {
        private String menuItemId;
        public String getMenuItemId() { return menuItemId; }
        public void setMenuItemId(String menuItemId) { this.menuItemId = menuItemId; }
    }

    // Inner class to represent order status response
    static class OrderStatus {
        private String menuItemName;
        private String statusMessage;
        private String orderStatus;

        public OrderStatus(String menuItemName, String statusMessage, String orderStatus) {
            this.menuItemName = menuItemName;
            this.statusMessage = statusMessage;
            this.orderStatus = orderStatus;
        }
        public String getMenuItemName() { return menuItemName; }
        public String getStatusMessage() { return statusMessage; }
        public String getOrderStatus() { return orderStatus; }
    }
}


@RestController
@RequestMapping("/api/issues")
public class IssueReportingController {

    private final IssueReportingService issueService = new IssueReportingService();

    @PostMapping // Maps POST to /api/issues (no specific path after /issues)
    public IssueReportResponse reportNewIssue(@RequestBody IssueReportRequest request) {
        String issueId = issueService.reportIssue(
                request.getIssueType(),
                request.getDescription(),
                request.getLocation(),
                "user123" // Example user ID - in real app, get from authentication
        );
        return new IssueReportResponse(issueId, "Submitted");
    }

    @GetMapping // Maps GET to /api/issues
    public List<IssueReport> getAllIssues() { // For admin/staff to view all
        return issueService.getAllIssueReports();
    }

    // ... More endpoints for getting specific issues, updating status, etc.

    // Inner class for Issue Report Request (for @RequestBody)
    static class IssueReportRequest {
        private String issueType;
        private String description;
        private String location;
        public String getIssueType() { return issueType; }
        public void setIssueType(String issueType) { this.issueType = issueType; }
        public String getDescription() { return description; }
        public void setDescription(String description) { this.description = description; }
        public String getLocation() { return location; }
        public void setLocation(String location) { this.location = location; }
    }

    // Inner class for Issue Report Response
    static class IssueReportResponse {
        private String issueId;
        private String status;
        public IssueReportResponse(String issueId, String status) {
            this.issueId = issueId;
            this.status = status;
        }
        public String getIssueId() { return issueId; }
        public String getStatus() { return status; }
    }
}


@RestController
@RequestMapping("/api/bus-tracking")
public class BusTrackingController {

    private final BusTrackingService busService = new BusTrackingService();

    @GetMapping("/routes") // GET /api/bus-tracking/routes
    public List<BusRoute> getBusRoutes() {
        return busService.getAllBusRoutes();
    }

    @GetMapping("/routes/{id}") // GET /api/bus-tracking/routes/{id}
    public BusRoute getBusRouteById(@PathVariable String id) {
        return busService.getBusRouteById(id);
    }

    // ... Potentially endpoints for admin to update bus locations, etc.
}

// ... You would create similar controllers for Lost & Found, Parking, Events, Map, etc.