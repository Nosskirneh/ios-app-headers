//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHSearchAllAbstractCellViewModel.h"

@class NSString;

@interface RHSearchAllAbstractMoreCellViewModel : RHSearchAllAbstractCellViewModel
{
    _Bool _showMoreResults;
}

@property(nonatomic) _Bool showMoreResults; // @synthesize showMoreResults=_showMoreResults;
- (_Bool)shouldHandleUserAction;
@property(readonly, nonatomic) NSString *moreText;
@property(readonly, nonatomic) NSString *moreHeaderTitle;
- (id)initWithShowMoreResults:(_Bool)arg1 andRootViewModel:(id)arg2;

@end

