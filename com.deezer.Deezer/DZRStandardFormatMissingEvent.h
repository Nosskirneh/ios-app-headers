//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSString;

@interface DZRStandardFormatMissingEvent : DeezerLogEvent
{
    NSString *_songId;
    NSString *_md5Origin;
    NSString *_networkType;
    NSString *_carrierName;
    NSString *_deviceModel;
}

+ (id)persistedPropertiesNames;
+ (int)logPhase;
+ (id)filePrefix;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(retain, nonatomic) NSString *md5Origin; // @synthesize md5Origin=_md5Origin;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (id)dictionary;

@end

