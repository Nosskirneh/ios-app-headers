//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class NSMutableArray;

@interface GCKOCEnvironmentScan : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *bleTokensArray; // @dynamic bleTokensArray;
@property(readonly, nonatomic) unsigned long long bleTokensArray_Count; // @dynamic bleTokensArray_Count;
@property(retain, nonatomic) NSMutableArray *wifiAccessPointArray; // @dynamic wifiAccessPointArray;
@property(readonly, nonatomic) unsigned long long wifiAccessPointArray_Count; // @dynamic wifiAccessPointArray_Count;

@end

