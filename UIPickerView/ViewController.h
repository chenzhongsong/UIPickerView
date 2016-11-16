//
//  ViewController.h
//  自定义UIPickerView
//
//  
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIPickerViewDelegate,UIPickerViewDataSource>{
    
    NSArray *_nameArray;
}

@property (strong, nonatomic) UIPickerView *pickerView;

@end
