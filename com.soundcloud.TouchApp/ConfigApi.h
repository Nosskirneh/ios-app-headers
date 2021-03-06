//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ConfigCallFactory, SoundCloudApiDispatcher;

@interface ConfigApi : NSObject
{
    ConfigCallFactory *_configCallFactory;
    SoundCloudApiDispatcher *_apiDispatcher;
}

@property(readonly, nonatomic) SoundCloudApiDispatcher *apiDispatcher; // @synthesize apiDispatcher=_apiDispatcher;
@property(readonly, nonatomic) ConfigCallFactory *configCallFactory; // @synthesize configCallFactory=_configCallFactory;
- (void).cxx_destruct;
- (id)postConfig;
- (id)getConfig;
- (id)initWithConfigCallFactory:(id)arg1 apiDispatcher:(id)arg2;
- (id)init;

@end

