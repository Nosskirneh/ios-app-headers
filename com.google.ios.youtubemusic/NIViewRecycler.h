//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NIViewRecycler : NSObject
{
    NSMutableDictionary *_reuseIdentifiersToRecycledViews;
}

@property(retain, nonatomic) NSMutableDictionary *reuseIdentifiersToRecycledViews; // @synthesize reuseIdentifiersToRecycledViews=_reuseIdentifiersToRecycledViews;
- (void).cxx_destruct;
- (void)removeAllViews;
- (void)recycleView:(id)arg1;
- (id)dequeueReusableViewWithIdentifier:(id)arg1;
- (void)reduceMemoryUsage;
- (id)init;
- (void)dealloc;

@end
