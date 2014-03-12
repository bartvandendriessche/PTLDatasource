//
//  PTLDatasource+TableView.h
//  PTLDatasource
//
//  Created by Brian Partridge on 8/30/13.
//
//

#import "PTLDatasource.h"
#import "PTLTableViewDatasource.h"

typedef BOOL(^PTLTableViewCanEditRowBlock)(UITableView *tableView, id item, NSIndexPath *indexPath);
typedef void(^PTLTableViewCommitEditingStyleBlock)(UITableView *tableView, UITableViewCellEditingStyle editingStyle, id item, NSIndexPath *indexPath);

@interface PTLDatasource (TableView) <PTLTableViewDatasource>

@property (nonatomic, copy) NSString *tableViewHeaderTitle;
@property (nonatomic, copy) NSString *tableViewFooterTitle;
@property (nonatomic, copy) NSString *tableViewCellIdentifier;
@property (nonatomic, copy) PTLTableViewCellConfigBlock tableViewCellConfigBlock;
@property (nonatomic, copy) PTLTableViewCanEditRowBlock tableViewCanEditRowBlock;
@property (nonatomic, copy) PTLTableViewCommitEditingStyleBlock tableViewCommitEditingStyleBlock;

@end
