//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTSlatePresenterQueuedSlate : NSObject
{
    _Bool _animated;
    id <SPTSlate> _slate;
}

+ (id)queuedSlate:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
- (void).cxx_destruct;
- (id)initWithSlate:(id)arg1 animated:(_Bool)arg2;

@end
