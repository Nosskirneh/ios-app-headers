//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface INMMoatHitTestResult : NSObject
{
    _Bool _isVisible;
    CALayer *_hitLayer;
}

@property __weak CALayer *hitLayer; // @synthesize hitLayer=_hitLayer;
@property _Bool isVisible; // @synthesize isVisible=_isVisible;
- (void).cxx_destruct;
- (id)initWithVis:(_Bool)arg1 withHitLayer:(id)arg2;

@end
