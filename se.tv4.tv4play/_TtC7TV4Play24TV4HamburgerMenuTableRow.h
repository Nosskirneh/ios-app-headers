//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC7TV4Play24TV4HamburgerMenuTableRow : NSObject
{
    // Error parsing type: , name: title
    // Error parsing type: , name: iconImageName
    // Error parsing type: , name: hasNoIcon
    // Error parsing type: , name: accessibilityIdentifier
    // Error parsing type: , name: rowSelectedActionHandler
    // Error parsing type: , name: rowDeselectionActionHandler
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithTitle:(id)arg1 iconImageName:(id)arg2 rowSelectedActionHandler:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 rowSelectedActionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithTitle:(id)arg1 iconImageName:(id)arg2 rowSelectedActionHandler:(CDUnknownBlockType)arg3 rowDeselectionActionHandler:(CDUnknownBlockType)arg4;
@property(nonatomic, copy) CDUnknownBlockType rowDeselectionActionHandler; // @synthesize rowDeselectionActionHandler;
@property(nonatomic, copy) CDUnknownBlockType rowSelectedActionHandler; // @synthesize rowSelectedActionHandler;
@property(nonatomic, copy) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier;
@property(nonatomic) _Bool hasNoIcon; // @synthesize hasNoIcon;
@property(nonatomic, copy) NSString *iconImageName; // @synthesize iconImageName;
@property(nonatomic, copy) NSString *title; // @synthesize title;

@end

