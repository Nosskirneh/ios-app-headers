//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class YTApiaryResourceParser;

@interface YTCommentService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_createCommentParser;
    YTApiaryResourceParser *_createCommentReplyParser;
    YTApiaryResourceParser *_commentActionParser;
    YTApiaryResourceParser *_updateCommentParser;
    YTApiaryResourceParser *_updateCommentReplyParser;
}

- (void).cxx_destruct;
- (void)performCommentActionWithEndpoint:(id)arg1 csn:(id)arg2 innerTubeResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)performCommentActionWithEndpoint:(id)arg1 innerTubeResponseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeUpdateCommentReplyRequestWithReply:(id)arg1 updateReplyParams:(id)arg2 clientScreenNonce:(id)arg3 innerTubeResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeUpdateCommentReplyRequestWithReply:(id)arg1 updateReplyParams:(id)arg2 innerTubeResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeUpdateCommentRequestWithComment:(id)arg1 updateCommentParams:(id)arg2 innerTubeResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeCreateCommentReplyRequestWithComment:(id)arg1 parentCommentID:(id)arg2 createReplyParams:(id)arg3 clientScreenNonce:(id)arg4 innerTubeResponseBlock:(CDUnknownBlockType)arg5 errorBlock:(CDUnknownBlockType)arg6;
- (void)makeCreateCommentReplyRequestWithComment:(id)arg1 parentCommentID:(id)arg2 createReplyParams:(id)arg3 innerTubeResponseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeCreateCommentRequestWithComment:(id)arg1 createCommentParams:(id)arg2 innerTubeResponseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)makeCreateCommentRequest:(id)arg1 innerTubeResponseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)addPollAttachment:(id)arg1 toCreatePostRequest:(id)arg2;
- (void)addVideoLinkAttachmentId:(id)arg1 toCreatePostRequest:(id)arg2;
- (void)addImageSourceExternalVideoId:(id)arg1 toCreatePostRequest:(id)arg2;
- (void)addImageAttachmentId:(id)arg1 toCreatePostRequest:(id)arg2;
- (id)createBackstagePostRequestWithParams:(id)arg1 postText:(id)arg2 accessRestriction:(int)arg3;
- (id)init;

@end

