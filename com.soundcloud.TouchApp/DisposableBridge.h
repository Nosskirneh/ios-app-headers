//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP8Features18DisposableBridging_-Protocol.h"

@class RACDisposable;

@interface DisposableBridge : NSObject <_TtP8Features18DisposableBridging_>
{
    RACDisposable *_disposable;
}

+ (id)disposableWithRACDisposable:(id)arg1;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
- (void).cxx_destruct;
- (id)initWithDisposable:(id)arg1;

@end
