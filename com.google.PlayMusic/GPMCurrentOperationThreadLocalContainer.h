//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMOperation;

@interface GPMCurrentOperationThreadLocalContainer : NSObject
{
    GPMOperation *_currentOp;
}

- (void).cxx_destruct;
- (void)clearCurrentOperation:(id)arg1;
- (void)setCurrentOperation:(id)arg1;
- (id)currentOperation;

@end

