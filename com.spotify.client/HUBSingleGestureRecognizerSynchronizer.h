//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBGestureRecognizerSynchronizing-Protocol.h"

@class HUBComponentGestureRecognizer;

@interface HUBSingleGestureRecognizerSynchronizer : NSObject <HUBGestureRecognizerSynchronizing>
{
    HUBComponentGestureRecognizer *_recognizingGestureRecognizer;
}

@property(nonatomic) __weak HUBComponentGestureRecognizer *recognizingGestureRecognizer; // @synthesize recognizingGestureRecognizer=_recognizingGestureRecognizer;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBeginHandlingTouches:(id)arg1;
- (void)gestureRecognizerDidFinishHandlingTouches:(id)arg1;
- (void)gestureRecognizerDidBeginHandlingTouches:(id)arg1;

@end

