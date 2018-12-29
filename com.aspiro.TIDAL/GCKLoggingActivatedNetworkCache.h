//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface GCKLoggingActivatedNetworkCache : NSObject
{
    NSMutableDictionary *_networkEntries;
    NSURL *_cacheUrl;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURL *cacheUrl; // @synthesize cacheUrl=_cacheUrl;
@property(retain, nonatomic) NSMutableDictionary *networkEntries; // @synthesize networkEntries=_networkEntries;
- (void).cxx_destruct;
- (void)clear;
- (void)loadNetworkCache;
- (_Bool)isNetworkActivated:(id)arg1;
- (void)addNetwork:(id)arg1;
- (id)init;

@end
