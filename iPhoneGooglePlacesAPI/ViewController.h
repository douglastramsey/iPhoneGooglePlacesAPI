//
//  ViewController.h
//  iPhoneGooglePlacesAPI
//
//  Created by DOUGLAS T RAMSEY on 5/18/13.
//  Copyright (c) 2013 Douglas T. Ramsey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "MapPoint.h"

//Uncomment the kGOOGLE_API_KEY below and add your unique key
//#define kGOOGLE_API_KEY @"<Insert API Key here>"
#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

@interface ViewController : UIViewController <MKMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLLocationCoordinate2D currentCentre;
    int currenDist;
    BOOL firstLaunch;
}
@property (strong, nonatomic) IBOutlet MKMapView *mapView;
@end
