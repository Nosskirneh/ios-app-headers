//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SPTAllocationContext;

@interface SPTSettingsSectionProviderInfo : NSObject
{
    id _provider;
    SEL _selector;
    SPTAllocationContext *_allocationContext;
}

+ (id)providerInfoWithProvider:(id)arg1 andSelector:(SEL)arg2;
@property(readonly, nonatomic) __weak SPTAllocationContext *allocationContext; // @synthesize allocationContext=_allocationContext;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProvider:(id)arg1 andSelector:(SEL)arg2;

@end

