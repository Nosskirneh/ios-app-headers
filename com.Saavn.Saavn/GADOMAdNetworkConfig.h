//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface GADOMAdNetworkConfig : NSObject
{
    NSString *_networkID;
    NSDictionary *_credentials;
    NSDictionary *_extras;
    NSDictionary *_ad;
    NSArray *_adapterList;
    Class _adapterClass;
    Class _RTBAdapterClass;
    NSString *_allocationID;
    NSArray *_impressionURLs;
    NSArray *_clickURLs;
    NSArray *_fillURLs;
    NSArray *_videoStartURLs;
    NSArray *_videoCompleteURLs;
    NSArray *_rewardedUserURLs;
    NSString *_responseType;
    NSArray *_slotSizes;
    double _timeout;
    NSString *_bidResponse;
}

+ (Class)mainAdapterClass;
@property(readonly, copy, nonatomic) NSString *bidResponse; // @synthesize bidResponse=_bidResponse;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, copy, nonatomic) NSArray *slotSizes; // @synthesize slotSizes=_slotSizes;
@property(readonly, copy, nonatomic) NSString *responseType; // @synthesize responseType=_responseType;
@property(readonly, copy, nonatomic) NSArray *rewardedUserURLs; // @synthesize rewardedUserURLs=_rewardedUserURLs;
@property(readonly, copy, nonatomic) NSArray *videoCompleteURLs; // @synthesize videoCompleteURLs=_videoCompleteURLs;
@property(readonly, copy, nonatomic) NSArray *videoStartURLs; // @synthesize videoStartURLs=_videoStartURLs;
@property(readonly, copy, nonatomic) NSArray *fillURLs; // @synthesize fillURLs=_fillURLs;
@property(readonly, copy, nonatomic) NSArray *clickURLs; // @synthesize clickURLs=_clickURLs;
@property(readonly, copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(readonly, copy, nonatomic) NSString *allocationID; // @synthesize allocationID=_allocationID;
@property(readonly, nonatomic) Class RTBAdapterClass; // @synthesize RTBAdapterClass=_RTBAdapterClass;
@property(readonly, nonatomic) Class adapterClass; // @synthesize adapterClass=_adapterClass;
@property(readonly, copy, nonatomic) NSArray *adapterList; // @synthesize adapterList=_adapterList;
@property(readonly, copy, nonatomic) NSDictionary *ad; // @synthesize ad=_ad;
@property(readonly, copy, nonatomic) NSDictionary *extras; // @synthesize extras=_extras;
@property(readonly, copy, nonatomic) NSDictionary *credentials; // @synthesize credentials=_credentials;
@property(readonly, copy, nonatomic) NSString *networkID; // @synthesize networkID=_networkID;
- (void).cxx_destruct;
- (id)adNetworkClassName;
- (_Bool)setError:(id *)arg1 withErrorCode:(long long)arg2 errorMessage:(id)arg3;
- (id)errorMessageForMissingAdapterClasses:(id)arg1;
- (id)description;
- (_Bool)resolveAdNetworkClassForCustomEventWithError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *publisherID;
- (id)initWithDictionary:(id)arg1 adFormat:(long long)arg2 error:(id *)arg3;

@end

