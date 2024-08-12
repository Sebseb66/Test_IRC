// class Client {

// 	public :

// 		Client(){};
// 		~Client(){};

// 		// Getters //

// 		int		get_client_fd() const{ return this->_client_fd; }

// 		std::string	get_client_nickname() const{ return this->_nickname; }
// 		std::string	get_client_username() const{ return this->_username; }
// 		std::string	get_client_hostname() const{ return this->_hostname; }
// 		std::string	get_client_servername() const{ return this->_servername; }
// 		std::string	get_client_realname() const{ return this->_realname; }

// 		bool	get_connected_status() const{ return this->_connected; }
// 		bool	get_user_status() const{ return this->_user_checked; }
// 		bool	get_nick_status() const{ return this->_nick_checked; }
// 		bool	get_oper_status() const{ return this->_oper_checked; }

// 		// Setters //

// 		void	set_client_fd( int fd ){ this->_client_fd = fd; }
// 		void	set_client_ip_addr( std::string ip_addr ){ this->_client_ip_addr = ip_addr; }

// 		void	set_client_nickname( std::string nickname ){ this->_nickname = nickname; }
// 		void	set_client_username( std::string username ){ this->_username = username; }
// 		void	set_client_hostname( std::string hostname ){ this->_hostname = hostname; }
// 		void	set_client_servername( std::string servername ){ this->_servername = servername; }
// 		void	set_client_realname( std::string realname ){ this->_realname = realname; }

// 		void	set_connected_status( bool status ){ this->_connected = status; }
// 		void	set_user_status( bool status ){ this->_user_checked = status; }
// 		void	set_nick_status( bool status ){ this->_nick_checked = status; }
// 		void	set_oper_status( bool status ){ this->_oper_checked = status; }

// 		// Function //

// 		static void	send_message( int fd, std::string message ){ send(fd, message.c_str(), message.length(), 0); }

// 	private :

// 		int		_client_fd;
// 		std::string	_client_ip_addr;

// 		std::string _nickname;
// 		std::string _username;
// 		std::string _hostname;
// 		std::string _servername;
// 		std::string _realname;

// 		bool	_connected;
// 		bool	_user_checked;
// 		bool	_nick_checked;
// 		bool	_oper_checked;
// };


class Client {

public:

    Client() : _connected(false), _user_checked(false), _nick_checked(false), _oper_checked(false), _is_registered(false) {}
    ~Client() {}

    // Getters //

    int get_client_fd() const { return this->_client_fd; }

    std::string get_client_nickname() const { return this->_nickname; }
    std::string get_client_username() const { return this->_username; }
    std::string get_client_hostname() const { return this->_hostname; }
    std::string get_client_servername() const { return this->_servername; }
    std::string get_client_realname() const { return this->_realname; }

    bool get_connected_status() const { return this->_connected; }
    bool get_user_status() const { return this->_user_checked; }
    bool get_nick_status() const { return this->_nick_checked; }
    bool get_oper_status() const { return this->_oper_checked; }
    bool is_registered() const { return this->_is_registered; }  // Nouveau getter pour is_registered

    // Setters //

    void set_client_fd(int fd) { this->_client_fd = fd; }
    void set_client_ip_addr(std::string ip_addr) { this->_client_ip_addr = ip_addr; }

    void set_client_nickname(std::string nickname) { this->_nickname = nickname; }
    void set_client_username(std::string username) { this->_username = username; }
    void set_client_hostname(std::string hostname) { this->_hostname = hostname; }
    void set_client_servername(std::string servername) { this->_servername = servername; }
    void set_client_realname(std::string realname) { this->_realname = realname; }

    void set_connected_status(bool status) { this->_connected = status; }
    void set_user_status(bool status) { this->_user_checked = status; }
    void set_nick_status(bool status) { this->_nick_checked = status; }
    void set_oper_status(bool status) { this->_oper_checked = status; }
    void set_registered(bool status) { this->_is_registered = status; }  // Nouveau setter pour is_registered

    // Function //

    static void send_message(int fd, std::string message) { send(fd, message.c_str(), message.length(), 0); }

private:

    int _client_fd;
    std::string _client_ip_addr;

    std::string _nickname;
    std::string _username;
    std::string _hostname;
    std::string _servername;
    std::string _realname;

    bool _connected;
    bool _user_checked;
    bool _nick_checked;
    bool _oper_checked;
    bool _is_registered;  // Nouveau membre privé pour l'état d'enregistrement
};