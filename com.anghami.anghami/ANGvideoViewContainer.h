//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ANGVideoView, NSDate;

@interface ANGvideoViewContainer : NSObject
{
    ANGVideoView *_videoView;
    NSDate *_requestDate;
}

@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(nonatomic) __weak ANGVideoView *videoView; // @synthesize videoView=_videoView;
- (void).cxx_destruct;
- (id)initWithVideoView:(id)arg1;

@end
