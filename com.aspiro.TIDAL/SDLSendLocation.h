//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDLRPCRequest.h"

@class NSArray, NSNumber, NSString, SDLDateTime, SDLImage, SDLOasisAddress;
@protocol SDLFloat;

@interface SDLSendLocation : SDLRPCRequest
{
}

@property(retain, nonatomic) SDLOasisAddress *address;
@property(retain, nonatomic) SDLDateTime *timeStamp;
@property(retain, nonatomic) NSString *deliveryMode;
@property(retain, nonatomic) SDLImage *locationImage;
@property(copy, nonatomic) NSString *phoneNumber;
@property(copy, nonatomic) NSArray *addressLines;
@property(copy, nonatomic) NSString *locationDescription;
@property(copy, nonatomic) NSString *locationName;
@property(copy, nonatomic) NSNumber<SDLFloat> *latitudeDegrees;
@property(copy, nonatomic) NSNumber<SDLFloat> *longitudeDegrees;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 locationName:(id)arg3 locationDescription:(id)arg4 displayAddressLines:(id)arg5 phoneNumber:(id)arg6 image:(id)arg7 deliveryMode:(id)arg8 timeStamp:(id)arg9 address:(id)arg10;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 locationName:(id)arg3 locationDescription:(id)arg4 address:(id)arg5 phoneNumber:(id)arg6 image:(id)arg7;
- (id)init;

@end

