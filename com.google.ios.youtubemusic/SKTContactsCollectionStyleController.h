//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewStyleController.h"

@protocol SKTContactsCollectionStyleDelegate, SKTSendKitCoreOptions;

@interface SKTContactsCollectionStyleController : QTMCollectionViewStyleController
{
    id <SKTContactsCollectionStyleDelegate> _contactsCollectionStyleDelegate;
    id <SKTSendKitCoreOptions> _options;
}

+ (id)dividerLineWithStyleController:(id)arg1 cellBounds:(struct CGRect)arg2 sectionOrdinalPosition:(unsigned long long)arg3 atIndexPath:(id)arg4 elementKind:(unsigned long long)arg5;
@property(retain) id <SKTSendKitCoreOptions> options; // @synthesize options=_options;
@property(nonatomic) __weak id <SKTContactsCollectionStyleDelegate> contactsCollectionStyleDelegate; // @synthesize contactsCollectionStyleDelegate=_contactsCollectionStyleDelegate;
- (void).cxx_destruct;
- (double)cellWidthAtSectionIndex:(long long)arg1;
- (struct UIEdgeInsets)contentViewInsetsForCellWithAttribute:(id)arg1;
- (id)initWithCollectionView:(id)arg1 options:(id)arg2;

@end

