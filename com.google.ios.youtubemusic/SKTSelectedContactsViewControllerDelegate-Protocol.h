//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTSelectedContactsDisplayDelegate-Protocol.h"

@class SKTContact;
@protocol SKTSelectedContactsDisplay;

@protocol SKTSelectedContactsViewControllerDelegate <SKTSelectedContactsDisplayDelegate>

@optional
- (void)selectedContactsVC:(id <SKTSelectedContactsDisplay>)arg1 didRemoveContact:(SKTContact *)arg2;
@end

