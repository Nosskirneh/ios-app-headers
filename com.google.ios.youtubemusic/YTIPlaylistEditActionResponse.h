//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTICommand, YTIPlaylistEditEntrySupportedRenderers, YTIPlaylistEditHeaderSupportedRenderers, YTIPlaylistEditMessageSupportedRenderers, YTIPlaylistEditVideoListSupportedRenderers, YTIRenderer, YTIResponseContext;

@interface YTIPlaylistEditActionResponse : GPBMessage
{
}

+ (id)descriptor;
- (id)ytm_addedPlaylistSetVideoID;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(copy, nonatomic) NSString *collaborationInviteLink; // @dynamic collaborationInviteLink;
@property(copy, nonatomic) NSString *failureReason; // @dynamic failureReason;
@property(nonatomic) _Bool hasCollaborationInviteLink; // @dynamic hasCollaborationInviteLink;
@property(nonatomic) _Bool hasFailureReason; // @dynamic hasFailureReason;
@property(nonatomic) _Bool hasNewEntry; // @dynamic hasNewEntry;
@property(nonatomic) _Bool hasNewHeader; // @dynamic hasNewHeader;
@property(nonatomic) _Bool hasNewMusicPlaylistShelfHeader; // @dynamic hasNewMusicPlaylistShelfHeader;
@property(nonatomic) _Bool hasNewVideoList; // @dynamic hasNewVideoList;
@property(nonatomic) _Bool hasPlaylistEditMessage; // @dynamic hasPlaylistEditMessage;
@property(nonatomic) _Bool hasRedirectEndpoint; // @dynamic hasRedirectEndpoint;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSharePlaylistEndpoint; // @dynamic hasSharePlaylistEndpoint;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) YTIPlaylistEditEntrySupportedRenderers *newEntry; // @dynamic newEntry;
@property(retain, nonatomic) YTIPlaylistEditHeaderSupportedRenderers *newHeader; // @dynamic newHeader;
@property(retain, nonatomic) YTIRenderer *newMusicPlaylistShelfHeader; // @dynamic newMusicPlaylistShelfHeader;
@property(retain, nonatomic) YTIPlaylistEditVideoListSupportedRenderers *newVideoList; // @dynamic newVideoList;
@property(retain, nonatomic) YTIPlaylistEditMessageSupportedRenderers *playlistEditMessage; // @dynamic playlistEditMessage;
@property(retain, nonatomic) NSMutableArray *playlistEditResultsArray; // @dynamic playlistEditResultsArray;
@property(readonly, nonatomic) unsigned long long playlistEditResultsArray_Count; // @dynamic playlistEditResultsArray_Count;
@property(retain, nonatomic) YTICommand *redirectEndpoint; // @dynamic redirectEndpoint;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTICommand *sharePlaylistEndpoint; // @dynamic sharePlaylistEndpoint;
@property(nonatomic) int status; // @dynamic status;

@end
