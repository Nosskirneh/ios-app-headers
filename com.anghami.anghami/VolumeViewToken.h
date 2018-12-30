//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol VolumeViewTokenDelegate;

@interface VolumeViewToken : NSObject
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _releaseBlock;
    id <VolumeViewTokenDelegate> _delegate;
    VolumeViewToken *_coExistToken;
}

@property(retain, nonatomic) VolumeViewToken *coExistToken; // @synthesize coExistToken=_coExistToken;
@property(retain, nonatomic) id <VolumeViewTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType releaseBlock; // @synthesize releaseBlock=_releaseBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (void)endSession;

@end

