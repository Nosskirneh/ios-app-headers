//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SPTHomeMixDomainModel;

@interface SPTHomeMixNext : NSObject
{
    SPTHomeMixDomainModel *_model;
    NSSet *_effects;
}

@property(readonly, nonatomic) NSSet *effects; // @synthesize effects=_effects;
@property(readonly, nonatomic) SPTHomeMixDomainModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 effect:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)initWithModel:(id)arg1 effects:(id)arg2;

@end

