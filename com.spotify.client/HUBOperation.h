//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HUBOperation : NSObject
{
    CDUnknownBlockType _block;
}

+ (id)asynchronousOperationWithBlock:(CDUnknownBlockType)arg1;
+ (id)synchronousOperationWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

