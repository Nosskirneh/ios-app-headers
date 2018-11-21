//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTPodcastTestManager, SPTProductState;

@interface SPTFreeTierFindEndpointFactory : NSObject
{
    id <SPTProductState> _productState;
    id <SPTPodcastTestManager> _podcastTestManager;
    NSString *_locale;
}

@property(readonly, copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void).cxx_destruct;
- (id)endpointForFindWithFreeTierEnabled:(_Bool)arg1;
- (id)endpointForFind;
- (id)endpointForFreeTierFind;
- (id)initWithProductState:(id)arg1 podcastTestManager:(id)arg2 locale:(id)arg3;

@end

