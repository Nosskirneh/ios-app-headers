//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSArray, NSNumber, NSString, SDLImage;
@protocol SDLBool, SDLFloat;

@interface SDLShowConstantTBT : SDLRPCRequest
{
}

@property(retain, nonatomic) NSArray *softButtons;
@property(retain, nonatomic) NSNumber<SDLBool> *maneuverComplete;
@property(retain, nonatomic) NSNumber<SDLFloat> *distanceToManeuverScale;
@property(retain, nonatomic) NSNumber<SDLFloat> *distanceToManeuver;
@property(retain, nonatomic) SDLImage *nextTurnIcon;
@property(retain, nonatomic) SDLImage *turnIcon;
@property(retain, nonatomic) NSString *totalDistance;
@property(retain, nonatomic) NSString *timeToDestination;
@property(retain, nonatomic) NSString *eta;
@property(retain, nonatomic) NSString *navigationText2;
@property(retain, nonatomic) NSString *navigationText1;
- (id)initWithNavigationText1:(id)arg1 navigationText2:(id)arg2 eta:(id)arg3 timeToDestination:(id)arg4 totalDistance:(id)arg5 turnIcon:(id)arg6 nextTurnIcon:(id)arg7 distanceToManeuver:(double)arg8 distanceToManeuverScale:(double)arg9 maneuverComplete:(_Bool)arg10 softButtons:(id)arg11;
- (id)init;

@end

