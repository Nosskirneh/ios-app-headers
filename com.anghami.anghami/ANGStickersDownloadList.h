//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ANGStickersDownloadList : NSObject
{
    NSMutableArray *_downloadsArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *downloadsArray; // @synthesize downloadsArray=_downloadsArray;
- (void).cxx_destruct;
- (void)finishedDownloading:(id)arg1;
- (void)startedDownloading:(id)arg1;
- (_Bool)downloadInProgressForSong:(id)arg1;

@end
