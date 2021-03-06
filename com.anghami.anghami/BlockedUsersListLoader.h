//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContentSectionLoader.h"

@class NSArray, NSAttributedString, NSMutableArray, NSString;

@interface BlockedUsersListLoader : ContentSectionLoader
{
    NSMutableArray *_blockedUsersList;
    NSAttributedString *_errorText;
}

- (void).cxx_destruct;
- (_Bool)didHandleParsingData:(id)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSAttributedString *errorText;
@property(readonly, nonatomic) NSArray *blockedUsersList;
- (id)actionString;
- (int)type;

@end

