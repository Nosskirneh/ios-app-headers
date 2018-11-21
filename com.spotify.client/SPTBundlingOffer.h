//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, UIColor;

@interface SPTBundlingOffer : NSObject
{
    NSDictionary *_dataContainer;
    NSDictionary *_viewDataContainer;
}

+ (id)offerFromDictionary:(id)arg1;
+ (id)offerFromData:(id)arg1;
@property(retain, nonatomic) NSDictionary *viewDataContainer; // @synthesize viewDataContainer=_viewDataContainer;
@property(retain, nonatomic) NSDictionary *dataContainer; // @synthesize dataContainer=_dataContainer;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *targetURIs;
@property(readonly, nonatomic) double showDelaySeconds;
@property(readonly, nonatomic) NSArray *controls;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSString *ctaButtonTitle;
- (id)dictionaryWithoutNull;
@property(readonly, nonatomic) NSDictionary *asDictionary;
@property(readonly, nonatomic) NSString *configurationId;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *offerDescription;
- (_Bool)containsOfferData;
@property(readonly, nonatomic, getter=isFresh) _Bool fresh;
@property(readonly, nonatomic) double maximumFreshTime;
- (double)updateMaximumFreshTimeStampSinceNowIfNotSet;
@property(readonly, nonatomic) long long rawRelativeExpiryTimeout;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (_Bool)isValidURI:(id)arg1;
- (_Bool)containsValidOfferForURI:(id)arg1;
- (void)setupViewDataContainer;
- (void)configureFromDictionary:(id)arg1;

@end

