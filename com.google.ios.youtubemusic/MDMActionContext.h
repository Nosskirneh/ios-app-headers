//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MDMActionContext : NSObject
{
    NSMutableArray *_interceptedActions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *interceptedActions;
- (void)addActionForLayer:(id)arg1 keyPath:(id)arg2;
- (id)init;

@end
