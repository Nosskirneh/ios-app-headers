//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIButtonTouchInjection : NSObject
{
}

+ (void)view:(id)arg1 handleTouchUpOutside:(id)arg2;
+ (void)view:(id)arg1 handleTouchMoveOutside:(id)arg2;
+ (void)view:(id)arg1 handleTouchCancel:(id)arg2;
+ (void)view:(id)arg1 handleTouchUp:(id)arg2;
+ (void)view:(id)arg1 handleTouchMove:(id)arg2;
+ (void)view:(id)arg1 handleTouchDown:(id)arg2;
+ (long long)view:(id)arg1 handleTouchOutsideEvent:(id)arg2;
+ (long long)view:(id)arg1 handleTouchInsideEvent:(id)arg2;
+ (_Bool)isActive:(id)arg1;
+ (_Bool)shouldHandleEventsForSubviews;
+ (long long)view:(id)arg1 handleTouchEvent:(id)arg2;

@end

