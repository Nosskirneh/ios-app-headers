//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BaseDAO, CoreDataController;

@interface UserSpotlightItemRepository : NSObject
{
    CoreDataController *_controller;
    BaseDAO *_spotlightItemDAO;
}

@property(readonly, nonatomic) BaseDAO *spotlightItemDAO; // @synthesize spotlightItemDAO=_spotlightItemDAO;
@property(readonly, nonatomic) CoreDataController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (id)buildSpotlightWithUser:(id)arg1 playable:(id)arg2 manipulator:(CDUnknownBlockType)arg3;
- (id)initWithController:(id)arg1 spotlightItemDAO:(id)arg2;
- (id)initWithController:(id)arg1;

@end

