//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SaavnDefaultConfig : NSObject
{
    NSDictionary *defaultConfig;
    NSDictionary *defaultConfigWIFI;
    NSDictionary *defaultConfigWWAN;
}

+ (id)sharedDefaultConfig;
@property(retain, nonatomic) NSDictionary *defaultConfigWWAN; // @synthesize defaultConfigWWAN;
@property(retain, nonatomic) NSDictionary *defaultConfigWIFI; // @synthesize defaultConfigWIFI;
@property(retain, nonatomic) NSDictionary *defaultConfig; // @synthesize defaultConfig;
- (void).cxx_destruct;
- (id)getCurrentDefaultConfig;
- (_Bool)defaultConfigPresent;
- (void)errorAsyncDefaultConfig:(id)arg1;
- (void)loadOfflineConfig;
- (void)successAsyncDefaultConfig:(id)arg1 fromLocalData:(_Bool)arg2;
- (void)refreshAsyncDefaultConfig:(_Bool)arg1;
- (void)refreshAsyncDefaultConfig:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)errorAsyncDefaultConfigAtAppLaunch:(id)arg1;
- (void)debugWithICookie;
- (void)successAsyncDefaultConfigAtAppLaunch:(id)arg1 fromLocalData:(_Bool)arg2;
- (void)successAsyncDefaultConfigAtAppLaunch:(id)arg1;
- (void)refreshAsyncDefaultConfigAtAppLaunch;
- (id)init;

@end

