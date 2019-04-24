#include <ros/ros.h>
#include <std_srvs/Empty.h>
#include <waypoint_navigator/GoToHeight.h>
#include <waypoint_navigator/GoToWaypoint.h>

class firefly {

    void land() {
        ros::ServiceClient clientLand = nh.serviceClient<std_srvs::Empty>("/firefly/land");
    }
    void height() {
        ros::ServiceClient clientHeight = nh.serviceClient<waypoint_navigator::GoToHeight>("/firefly/go_to_height");
        waypoint_navigator::GoToWaypoint::Request srv;
        srv.request.point.z = 90;
    }    
    void waypoint() {
        ros::ServiceClient clientWaypoint = nh.serviceClient<waypoint_navigator::GoToWaypoint>("/firefly/go_to_waypoint");
        waypoint_navigator::GoToWaypoint srv;
        srv.request.point.x = 5;
        srv.request.point.y = 0;
        srv.request.point.z = 90;
    }
}
