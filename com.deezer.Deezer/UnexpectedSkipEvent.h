//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSNumber, NSString;

@interface UnexpectedSkipEvent : DeezerLogEvent
{
    NSString *_networkType;
    NSString *_carrierName;
    NSString *_cdnIP;
    NSString *_deviceIP;
    NSString *_deviceModel;
    NSString *_mediaType;
    NSString *_songId;
    NSString *_sourceContentHash;
    NSString *_lastDeliveryRevision;
    NSString *_contentURLString;
    NSString *_quality;
    NSString *_format;
    NSNumber *_announcedContentSize;
    NSNumber *_storedContentSize;
    NSString *_cacheType;
    NSString *_cacheStatus;
    NSNumber *_announcedDuration;
    NSNumber *_availableDuration;
    NSNumber *_listeningDurationBeforeSkipping;
    NSString *_errorDescription;
}

+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(retain, nonatomic) NSNumber *listeningDurationBeforeSkipping; // @synthesize listeningDurationBeforeSkipping=_listeningDurationBeforeSkipping;
@property(retain, nonatomic) NSNumber *availableDuration; // @synthesize availableDuration=_availableDuration;
@property(retain, nonatomic) NSNumber *announcedDuration; // @synthesize announcedDuration=_announcedDuration;
@property(retain, nonatomic) NSString *cacheStatus; // @synthesize cacheStatus=_cacheStatus;
@property(retain, nonatomic) NSString *cacheType; // @synthesize cacheType=_cacheType;
@property(retain, nonatomic) NSNumber *storedContentSize; // @synthesize storedContentSize=_storedContentSize;
@property(retain, nonatomic) NSNumber *announcedContentSize; // @synthesize announcedContentSize=_announcedContentSize;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSString *quality; // @synthesize quality=_quality;
@property(retain, nonatomic) NSString *contentURLString; // @synthesize contentURLString=_contentURLString;
@property(retain, nonatomic) NSString *lastDeliveryRevision; // @synthesize lastDeliveryRevision=_lastDeliveryRevision;
@property(retain, nonatomic) NSString *sourceContentHash; // @synthesize sourceContentHash=_sourceContentHash;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *deviceIP; // @synthesize deviceIP=_deviceIP;
@property(retain, nonatomic) NSString *cdnIP; // @synthesize cdnIP=_cdnIP;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
- (void).cxx_destruct;
- (id)dictionary;

@end

