//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ANGUserFollowSuggestionTableViewCell, User;

@protocol ANGUserFollowSuggestionTableViewCellDelegate <NSObject>

@optional
- (void)userSuggestionTableViewCell:(ANGUserFollowSuggestionTableViewCell *)arg1 didTapFollowForUser:(User *)arg2;
- (void)userSuggestionTableViewCell:(ANGUserFollowSuggestionTableViewCell *)arg1 didTapDismissForUser:(User *)arg2;
@end

