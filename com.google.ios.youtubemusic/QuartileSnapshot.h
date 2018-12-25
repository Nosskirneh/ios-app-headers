//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface QuartileSnapshot : NSObject
{
    int _viewablePercentage;
    NSNumber *_instantaneousState;
}

@property(retain, nonatomic) NSNumber *instantaneousState; // @synthesize instantaneousState=_instantaneousState;
@property(nonatomic) int viewablePercentage; // @synthesize viewablePercentage=_viewablePercentage;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initViewablePercentage:(int)arg1 instantaneousState:(int)arg2;

@end

