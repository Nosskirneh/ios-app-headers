//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand;

@interface YTIUdcLocationEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasOnAccepted; // @dynamic hasOnAccepted;
@property(nonatomic) _Bool hasOnRejected; // @dynamic hasOnRejected;
@property(nonatomic) _Bool hasProductContext; // @dynamic hasProductContext;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTICommand *onAccepted; // @dynamic onAccepted;
@property(retain, nonatomic) YTICommand *onRejected; // @dynamic onRejected;
@property(copy, nonatomic) NSString *productContext; // @dynamic productContext;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;

@end
