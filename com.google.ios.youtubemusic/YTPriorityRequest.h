//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol YTPriorityLoaderDelegate;

@interface YTPriorityRequest : NSObject
{
    CDUnknownBlockType _requestBlock;
    id <YTPriorityLoaderDelegate> _delegate;
}

@property(nonatomic) __weak id <YTPriorityLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;
- (void).cxx_destruct;

@end
