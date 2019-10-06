//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKShareVideo, NSDictionary, NSNumber, NSNumberFormatter, NSString;
@protocol FBSDKVideoUploaderDelegate;

@interface FBSDKVideoUploader : NSObject
{
    NSNumber *_videoID;
    NSNumber *_uploadSessionID;
    NSNumberFormatter *_numberFormatter;
    NSString *_graphPath;
    NSString *_videoName;
    unsigned long long _videoSize;
    FBSDKShareVideo *_video;
    NSDictionary *_parameters;
    NSString *_graphNode;
    id <FBSDKVideoUploaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBSDKVideoUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *graphNode; // @synthesize graphNode=_graphNode;
@property(copy, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly, copy, nonatomic) FBSDKShareVideo *video; // @synthesize video=_video;
- (void).cxx_destruct;
- (id)_graphPathWithSuffix:(id)arg1;
- (id)numberFormatter;
- (id)_extractOffsetsFromResultDictionary:(id)arg1;
- (void)_postFinishRequest;
- (void)_startTransferRequestWithOffsetDictionary:(id)arg1;
- (void)_postStartRequest;
- (void)start;
- (id)initWithVideoName:(id)arg1 videoSize:(unsigned long long)arg2 parameters:(id)arg3 delegate:(id)arg4;

@end

