//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class ANGImageDownloaderQueueItem, NSCondition, NSObject;

@interface ANGImageDownloadThread : NSThread
{
    NSCondition *_condition;
    NSObject *_lock;
    ANGImageDownloaderQueueItem *_currentItem;
    long long _maxPriority;
    long long _minPriority;
}

@property(nonatomic) long long minPriority; // @synthesize minPriority=_minPriority;
@property(nonatomic) long long maxPriority; // @synthesize maxPriority=_maxPriority;
- (void).cxx_destruct;
- (void)possiblyNotifyForThumbnail:(id)arg1 image:(id)arg2;
- (_Bool)atomicallyAddOperation:(id)arg1;
- (void)main;
- (id)initWithCondition:(id)arg1;

@end

