//
//  MapAnnotationView.m
//  ChaseChallenge
//
//  Created by RAYEN KAMTA. on 7/31/15.
//  Copyright (c) 2015 RAYEN KAMTA. All rights reserved.
//

#import "MapAnnotationView.h"

@implementation MapAnnotationView

- (instancetype)initWithAnnotation:(id<MKAnnotation>)annotation reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithAnnotation:annotation reuseIdentifier:reuseIdentifier];
    if (self) {
        self.image = [UIImage imageNamed:@"jpm_chase_icon_lg.png"];
        self.enabled = YES;
        self.canShowCallout = YES;
        
        self.rightCalloutAccessoryView = [UIButton buttonWithType:UIButtonTypeDetailDisclosure];

    }
    return self;
}



@end
