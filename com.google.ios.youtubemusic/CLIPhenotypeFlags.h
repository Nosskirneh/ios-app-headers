//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLIClientSideConfiguration, NSArray, NSString, PHTPhenotypeFlags;

@interface CLIPhenotypeFlags : NSObject
{
    NSString *_flagName;
    PHTPhenotypeFlags *_flags;
    CLIClientSideConfiguration *_cachedConfiguration;
    NSArray *_cachedBlockedParameters;
}

+ (id)phenotypePackageName;
- (void).cxx_destruct;
- (id)configuration;
@property(readonly, nonatomic) NSArray *blockedParameters;
- (id)initWithApplicationName:(id)arg1 phenotypeFlags:(id)arg2;
- (id)initWithApplicationName:(id)arg1;

@end
