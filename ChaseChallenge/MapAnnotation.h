//
//  MapAnnotation.h
//  ChaseChallenge
//
//  Created by RAYEN KAMTA. on 7/30/15.
//  Copyright (c) 2015 RAYEN KAMTA. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import "LocationData.h"

@interface MapAnnotation : NSObject <MKAnnotation>

@property (nonatomic) CLLocationCoordinate2D coordinate;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, strong) LocationData *theDataObject;

@end
