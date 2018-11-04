//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharing-Protocol.h"
#import "FBSDKVideoUploaderDelegate-Protocol.h"

@class ALAssetRepresentation, FBSDKAccessToken, NSFileHandle, NSString;
@protocol FBSDKSharingContent, FBSDKSharingDelegate;

@interface FBSDKShareAPI : NSObject <FBSDKVideoUploaderDelegate, FBSDKSharing>
{
    NSFileHandle *_fileHandle;
    ALAssetRepresentation *_assetRepresentation;
    _Bool _shouldFailOnDataError;
    id <FBSDKSharingDelegate> _delegate;
    id <FBSDKSharingContent> _shareContent;
    FBSDKAccessToken *_accessToken;
    NSString *_message;
    NSString *_graphNode;
}

+ (void)initialize;
+ (id)defaultAssetsLibrary;
+ (id)shareWithContent:(id)arg1 delegate:(id)arg2;
@property(copy, nonatomic) NSString *graphNode; // @synthesize graphNode=_graphNode;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) FBSDKAccessToken *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) _Bool shouldFailOnDataError; // @synthesize shouldFailOnDataError=_shouldFailOnDataError;
@property(copy, nonatomic) id <FBSDKSharingContent> shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) __weak id <FBSDKSharingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoUploader:(id)arg1 didFailWithError:(id)arg2;
- (void)videoUploader:(id)arg1 didCompleteWithResults:(id)arg2;
- (id)videoChunkDataForVideoUploader:(id)arg1 startOffset:(unsigned long long)arg2 endOffset:(unsigned long long)arg3;
- (void)_removeFromPendingShareAPI;
- (_Bool)_addToPendingShareAPI;
- (id)_connection:(id)arg1 addRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_stageValue:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (_Bool)_stagePhoto:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (_Bool)_stageOpenGraphValueContainer:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (_Bool)_stageOpenGraphObject:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_stageArray:(id)arg1 connection:(id)arg2 stagingHandler:(CDUnknownBlockType)arg3;
- (_Bool)_addEncodedParametersToDictionary:(id)arg1 key:(id)arg2 value:(id)arg3 error:(id *)arg4;
- (_Bool)_shareVideoContent:(id)arg1;
- (_Bool)_sharePhotoContent:(id)arg1;
- (_Bool)_shareOpenGraphContent:(id)arg1;
- (_Bool)_shareLinkContent:(id)arg1;
- (_Bool)_hasPublishActions;
- (void)_addCommonParameters:(id)arg1 content:(id)arg2;
- (id)_graphPathWithSuffix:(id)arg1;
- (_Bool)validateWithError:(id *)arg1;
- (_Bool)share;
- (_Bool)createOpenGraphObject:(id)arg1;
- (_Bool)canShare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

