//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SPTRateMeRequirementSet : NSObject
{
    NSMutableArray *_requirements;
}

@property(retain, nonatomic) NSMutableArray *requirements; // @synthesize requirements=_requirements;
- (void).cxx_destruct;
- (void)addRequirement:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)init;

@end

