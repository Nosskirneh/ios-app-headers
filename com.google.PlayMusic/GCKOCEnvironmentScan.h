//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_PBMutableArray;

__attribute__((visibility("hidden")))
@interface GCKOCEnvironmentScan : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_PBMutableArray *bleTokensArray; // @dynamic bleTokensArray;
@property(nonatomic) _Bool hasBleTokensArray; // @dynamic hasBleTokensArray;
@property(nonatomic) _Bool hasWifiAccessPointArray; // @dynamic hasWifiAccessPointArray;
@property(retain, nonatomic) GCKPB_PBMutableArray *wifiAccessPointArray; // @dynamic wifiAccessPointArray;

@end

