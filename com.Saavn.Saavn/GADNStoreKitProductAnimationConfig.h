//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNAnimationConfig.h"

@class NSString;

@interface GADNStoreKitProductAnimationConfig : GADNAnimationConfig
{
    NSString *_productIdentifier;
    NSString *_dismissalNotificationRequestIdentifier;
}

@property(readonly, copy, nonatomic) NSString *dismissalNotificationRequestIdentifier; // @synthesize dismissalNotificationRequestIdentifier=_dismissalNotificationRequestIdentifier;
@property(readonly, copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

