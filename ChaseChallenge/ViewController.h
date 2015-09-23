//
//  ViewController.h
//  ChaseChallenge
//
//  Created by RAYEN KAMTA. on 7/30/15.
//  Copyright (c) 2015 RAYEN KAMTA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "MapAnnotation.h"
#import "LocationData.h"

@interface ViewController : UIViewController <CLLocationManagerDelegate>

@property(nonatomic, strong) CLLocationManager *locationManager;


@end

