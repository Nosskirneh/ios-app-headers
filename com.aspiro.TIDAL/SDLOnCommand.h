//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCNotification.h"

@class NSNumber, NSString;
@protocol SDLInt;

@interface SDLOnCommand : SDLRPCNotification
{
}

@property(retain, nonatomic) NSString *triggerSource;
@property(retain, nonatomic) NSNumber<SDLInt> *cmdID;
- (id)init;

@end
